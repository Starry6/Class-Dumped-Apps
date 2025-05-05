@interface CNCardActionGroupItem : CNCardGroupItem
@property (nonatomic) NSArray actions;
- (id)initWithAction:;
- (void)addAction:;
- (id)init;
- (id)actions;
- (void).cxx_destruct;
- (Class)cellClass;
+ (id)actionGroupItemWithAction:;
+ (id)actionGroupItemWithActions:;
@end
