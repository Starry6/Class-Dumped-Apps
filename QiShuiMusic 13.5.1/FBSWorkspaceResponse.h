@interface FBSWorkspaceResponse : NSObject
@property (nonatomic) FBSSceneMessage message;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (void)setMessage:;
- (id)initWithXPCDictionary:;
- (id)message;
- (void).cxx_destruct;
@end
