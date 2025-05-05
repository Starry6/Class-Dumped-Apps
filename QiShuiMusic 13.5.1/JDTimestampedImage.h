@interface JDTimestampedImage : NSObject
@property (nonatomic) ^{__CVBuffer=} image;
@property (nonatomic) NSDictionary metadataDictionary;
@property (nonatomic) {?=qiIq} timestamp;
- (id)metadataDictionary;
- (void)dealloc;
- (void).cxx_destruct;
- (id)timestamp;
- (id)image;
- (id)initWithImage:metadataDictionary:andTimestamp:;
- (id)initWithImage:andTimestamp:;
@end
