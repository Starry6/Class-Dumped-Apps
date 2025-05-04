@interface AWEIMSkylightBizCommonDataBuilder : NSObject
@property (nonatomic) BOOL needCurrentLoginUser;
@property (nonatomic) NSDictionary bizTypeToVMTypeMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setNeedCurrentLoginUser:;
- (id)bizTypeToVMTypeMap;
- (BOOL)needCurrentLoginUser;
- (id)buildViewModelsWithContext:bizType:;
- (void)setBizTypeToVMTypeMap:;
- (void).cxx_destruct;
+ (id)builderWithNeedCurrentLoginUser:;
@end
