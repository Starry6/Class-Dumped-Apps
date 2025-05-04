@interface AWEDLMStage : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString pageName;
@property (nonatomic) double timeStamp;
@property (nonatomic) double costTime;
- (void)setCostTime:;
- (double)costTime;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (double)timeStamp;
- (id)initWithCoder:;
- (void)setTimeStamp:;
- (id)pageName;
- (void)setPageName:;
@end
