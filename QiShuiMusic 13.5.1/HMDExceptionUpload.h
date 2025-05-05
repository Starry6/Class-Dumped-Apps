@interface HMDExceptionUpload : NSObject
@property (nonatomic) HMDDebugRealConfig debugRealConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)RefactorExcuteCommand:completion:;
- (id)debugRealConfig;
- (id)eventTypeWithCloudCommandUploadType:;
- (void)excuteCommand:completion:;
- (void)fetchExcptionDataWithCallback:;
- (void)oldExcuteCommand:completion:;
- (void)setDebugRealConfig:;
- (void).cxx_destruct;
+ (id)createInstance;
@end
