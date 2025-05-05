@interface UITableViewIndexVisualStyle_CarPlay : NSObject
@property (nonatomic) UITableViewIndex tableViewIndex;
@property (nonatomic) UIFont font;
@property (nonatomic) double indexWidth;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double minLineSpacing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFont:;
- (void).cxx_destruct;
- (id)font;
- (double)lineSpacing;
- (void)willDrawEntryAtIndex:indexBounds:entryBounds:context:originalColor:;
- (void)didDrawEntryAtIndex:indexBounds:entryBounds:context:originalColor:;
- (void)selectedSectionDidChange:;
- (void)trackingDidBegin;
- (void)trackingDidEnd;
- (id)initWithTableViewIndex:;
- (id)tableViewIndex;
- (void)setTableViewIndex:;
- (double)indexWidth;
- (double)minLineSpacing;
- (void)handleTouch:withEvent:touchedEntryIndex:;
@end
