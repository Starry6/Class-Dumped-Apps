@interface BDRETreeNode : NSObject
@property (nonatomic) BDRECommand command;
@property (nonatomic) NSArray children;
- (id)initWithCommand:children:;
- (id)children;
- (id)command;
- (void).cxx_destruct;
@end
