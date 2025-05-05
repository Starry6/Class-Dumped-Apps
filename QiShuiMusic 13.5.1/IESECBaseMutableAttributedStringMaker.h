@interface IESECBaseMutableAttributedStringMaker : NSObject
@property (nonatomic) NSMutableArray generators;
@property (nonatomic) NSMutableArray openingGroups;
@property (nonatomic) @? group;
- (void)addGenerator:;
- (id)openingGroups;
- (void)setGenerators:;
- (void)setOpeningGroups:;
- (id)group;
- (void).cxx_destruct;
- (id)enterGroup;
- (id)leaveGroup;
- (id)generators;
- (id)contentManager;
@end
