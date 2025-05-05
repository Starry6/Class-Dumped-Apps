@interface AVCapturePreparedPhotoSettingsArrayRequest : NSObject
@property (nonatomic) Q requestID;
@property (nonatomic) NSArray photoSettingsArray;
@property (nonatomic) @? completionHandler;
@property (nonatomic) BOOL completed;
- (void)dealloc;
- (void)setCompleted:;
- (id)_initWithArray:completionHandler:;
- (unsigned long long)requestID;
- (BOOL)isCompleted;
- (id)photoSettingsArray;
- (void)_setRequestID:;
- (id)completionHandler;
+ (id)preparedPhotoSettingsArrayRequestWithArray:completionHandler:;
@end
