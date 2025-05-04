@interface AWESearchAdImageItem : NSObject
@property (nonatomic) BOOL isFinish;
@property (nonatomic) BOOL isError;
@property (nonatomic) NSString key;
@property (nonatomic) NSMutableData data;
@property (nonatomic) Q type;
@property (nonatomic) NSString mainFrameUrl;
@property (nonatomic) NSString keyMd5;
- (BOOL)isFinish;
- (void)setIsFinish:;
- (id)keyMd5;
- (id)mainFrameUrl;
- (void)setMainFrameUrl:;
- (void)appendData:;
- (void)setKey:;
- (id)key;
- (unsigned long long)type;
- (id)description;
- (void)setType:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (BOOL)isError;
- (void)setIsError:;
@end
