@interface CNMeCardSharingRowItem : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) UIView accessoryView;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) @? confirmationHandler;
- (id)label;
- (BOOL)isSelected;
- (id)accessoryView;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (id)initWithLabel:accessoryView:;
- (id)initWithLabel:accessoryView:confirmationHandler:;
- (id)confirmationHandler;
@end
