@interface AWEIMFoldMessageClassifyUtility : NSObject
@property (nonatomic) NSArray textTypeMessageArr;
@property (nonatomic) NSArray imageTypeMessageArr;
@property (nonatomic) NSArray videoTypeMessageArr;
- (id)textTypeMessageArr;
- (id)imageTypeMessageArr;
- (id)videoTypeMessageArr;
- (long long)transferMessageTypeToFoldMessageType:;
- (void)setTextTypeMessageArr:;
- (void)setImageTypeMessageArr:;
- (void)setVideoTypeMessageArr:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
