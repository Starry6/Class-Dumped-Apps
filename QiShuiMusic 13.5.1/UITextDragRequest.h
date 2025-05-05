@interface UITextDragRequest : NSObject
@property (nonatomic) NSArray suggestedItems;
@property (nonatomic) BOOL selected;
@property (nonatomic) UITextRange dragRange;
@property (nonatomic) NSArray existingItems;
@property (nonatomic) <UIDragSession> dragSession;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dragSession;
- (void)setSelected:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (id)dragRange;
- (id)suggestedItems;
- (id)existingItems;
- (id)initWithRange:inSession:;
- (void)setSuggestedItems:;
@end
