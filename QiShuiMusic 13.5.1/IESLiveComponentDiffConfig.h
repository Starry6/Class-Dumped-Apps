@interface IESLiveComponentDiffConfig : NSObject
@property (nonatomic) NSString outerRole;
@property (nonatomic) NSArray outerComponents;
@property (nonatomic) <IESLiveComponentAttacher> outerAttacher;
@property (nonatomic) <IESLiveModule> outerModule;
- (id)outerComponents;
- (void)setOuterModule:;
- (id)outerAttacher;
- (id)outerModule;
- (id)outerRole;
- (void)setOuterAttacher:;
- (void)setOuterComponents:;
- (void)setOuterRole:;
- (void).cxx_destruct;
@end
