@interface IESMMDL : IESMMObject
@property (nonatomic) NSMutableDictionary arFrameInfos;
@property (nonatomic) <IESMMDLInfoDelegate> delegate;
- (id)arFrameInfos;
- (id)getLCInfo;
- (BOOL)isLocationAuthor;
- (void)setArFrameInfos:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
