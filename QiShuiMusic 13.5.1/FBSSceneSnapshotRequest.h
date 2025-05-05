@interface FBSSceneSnapshotRequest : NSObject
@property (nonatomic) NSString sceneID;
@property (nonatomic) <FBSSceneSnapshotRequestDelegate> delegate;
@property (nonatomic) FBSSceneSettings settings;
@property (nonatomic) BOOL allowsProtectedContent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSceneID:;
- (void)encodeWithXPCDictionary:;
- (id)settings;
- (id)sceneID;
- (BOOL)allowsProtectedContent;
- (void)setDelegate:;
- (id)succinctDescriptionBuilder;
- (id)initWithSettings:;
- (id)initWithXPCDictionary:;
- (id)delegate;
- (id)initWithSettings:allowsProtectedContent:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (BOOL)performSnapshotWithContext:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
@end
