//
//  ETSegmentedView.h
//  Pods
//
//  Created by Ersen Tekin on 30/03/15.
//
//

#import <UIKit/UIKit.h>
#import <pop/POP.h>

@class ETSegmentedView;

@protocol ETSegmentedViewDelegate <NSObject>

-(void)ETSegmentedViewButtonTappedWithIndex:(NSUInteger)index;

@end

@interface ETSegmentedView : UIView <UIScrollViewDelegate> {
    CGRect selfFrame;
    float lastContentX;
    BOOL isScrollingAnimationActive;
    CGFloat selRed, selGreen, selBlue, selAlpha, textSelRed, textSelGreen, textSelBlue, textSelAlpha;
    CGFloat nonRed, nonGreen, nonBlue, nonAlpha, textNonSelRed, textNonSelGreen, textNonSelBlue, textNonSelAlpha;;
}

@property (strong, nonatomic) id <ETSegmentedViewDelegate> delegate;
@property (strong, nonatomic) NSArray *titles;
@property (strong, nonatomic) NSArray *contents;
@property (strong, nonatomic) NSMutableArray *arrayTitleButtons;
@property (strong, nonatomic) NSMutableArray *arrayTitleLabels;
@property (strong, nonatomic) UIView *viewButtons;
@property (strong, nonatomic) UIColor *selectionColor;
@property (strong, nonatomic) UIColor *nonSelectionColor;
@property (strong, nonatomic) UIFont *selectionFont;
@property (strong, nonatomic) UIFont *nonSelectionFont;
@property (strong, nonatomic) UIColor *selectionTextColor;
@property (strong, nonatomic) UIColor *nonSelectionTextColor;
@property (strong, nonatomic) UIView  *viewSelection;
@property (strong, nonatomic) UIScrollView* scrollViewContent;
@property NSUInteger currentIndex;
@property float buttonTabHeight;

@end
