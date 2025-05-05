@interface UIInterfaceActionSection : NSObject
@property (nonatomic) NSArray actions;
@property (nonatomic) NSString sectionID;
- (id)sectionID;
- (id)actions;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithActions:;
- (id)copyOfActions;
+ (id)actionsFromSections:;
@end
