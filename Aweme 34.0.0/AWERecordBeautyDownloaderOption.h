@interface AWERecordBeautyDownloaderOption : NSObject
@property (nonatomic) BOOL ignoreWhenNoUpdate;
- (BOOL)ignoreWhenNoUpdate;
- (void)setIgnoreWhenNoUpdate:;
+ (id)optionWithIgnoreWhenNoUpdate:;
@end
