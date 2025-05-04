@interface AWESearchWebTranscodeContainerContext : NSObject
@property (nonatomic) BOOL isVideoTranscode;
@property (nonatomic) BOOL isNovelTranscode;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) BOOL isNovelPreload;
@property (nonatomic) BOOL disableDarkMode;
@property (nonatomic) BOOL useTranscodeingManager;
@property (nonatomic) @? didRecieveTranscodeBlock;
@property (nonatomic) @? didRecieveNovelTranscodeResultBlock;
- (BOOL)isPreload;
- (void)setIsPreload:;
- (BOOL)disableDarkMode;
- (void)setDisableDarkMode:;
- (BOOL)useTranscodeingManager;
- (id)didRecieveTranscodeBlock;
- (void)setDidRecieveTranscodeBlock:;
- (void)setIsNovelPreload:;
- (void)setIsNovelTranscode:;
- (void)setDidRecieveNovelTranscodeResultBlock:;
- (void)setIsVideoTranscode:;
- (BOOL)isVideoTranscode;
- (BOOL)isNovelTranscode;
- (void)setUseTranscodeingManager:;
- (BOOL)isNovelPreload;
- (id)didRecieveNovelTranscodeResultBlock;
- (void).cxx_destruct;
@end
