@interface AWEVoipInvokeExternBusinessInfo : NSObject
@property (nonatomic) Q businessType;
@property (nonatomic) NSString businessAppID;
@property (nonatomic) NSString businessInfo;
- (id)businessInfo;
- (id)initWithAppID:businessType:businessInfo:;
- (id)businessAppID;
- (unsigned long long)businessType;
- (void).cxx_destruct;
@end
