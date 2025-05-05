@interface FRCFrame : NSObject
@property (nonatomic) ^{__CVBuffer=} buffer;
@property (nonatomic) {?=qiIq} presentationTimeStamp;
@property (nonatomic) NSDictionary info;
- (void)dealloc;
- (id)buffer;
- (void).cxx_destruct;
- (id)presentationTimeStamp;
- (id)info;
- (id)initWithBuffer:presentationTimeStamp:;
- (id)initWithBuffer:presentationTimeStamp:info:;
@end
