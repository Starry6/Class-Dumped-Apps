@interface AWEIMAudioEmojiDataService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cleanExpiredFiles;
- (void)cleanAllFiles;
- (void)setup;
@end
