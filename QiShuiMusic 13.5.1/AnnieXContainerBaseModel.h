@interface AnnieXContainerBaseModel : MTLModel
@property (nonatomic) AnnieXContainerContextModel contextModel;
@property (nonatomic) NSString containerName;
@property (nonatomic) NSString sessionId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)collectContainerBase:value:;
- (void)collectContainerContext:value:;
- (id)contextModel;
- (id)getBaseContext;
- (void)setContextModel:;
- (void)setSessionId:;
- (id)sessionId;
- (id)containerName;
- (id)init;
- (void)setContainerName:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
