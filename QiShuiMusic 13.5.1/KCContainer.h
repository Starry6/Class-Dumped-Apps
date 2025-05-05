@interface KCContainer : NSObject
@property (nonatomic) I type;
@property (nonatomic) Q tag;
@property (nonatomic) NSMutableDictionary data;
@property (nonatomic) NSInteger pid;
@property (nonatomic) NSMutableDictionary truncated_threads;
@property (nonatomic) NSInteger unindexed_frames;
@property (nonatomic) NSInteger invalid_images;
- (unsigned long long)tag;
- (id)data;
- (unsigned int)type;
- (int)pid;
- (void).cxx_destruct;
- (void)setPid:;
- (id)initWithKCData:;
- (void)omit;
- (id)truncated_threads;
- (int)unindexed_frames;
- (void)setUnindexed_frames:;
- (int)invalid_images;
- (void)setInvalid_images:;
@end
