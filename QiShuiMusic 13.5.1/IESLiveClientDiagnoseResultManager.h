@interface IESLiveClientDiagnoseResultManager : NSObject
@property (nonatomic) @? clientDiganoseBlock;
@property (nonatomic) NSDictionary clientDignoseDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addClientDiagnose:;
- (id)clientDiganoseBlock;
- (id)clientDignoseDict;
- (id)diagnoseResultForType:;
- (id)diagnoseResultKeyForType:;
- (void)removeClientDiagnose:;
- (void)setClientDiganoseBlock:;
- (void)setClientDignoseDict:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
