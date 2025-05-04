@interface AWEStickerPickerLogger : NSObject
@property (nonatomic) <AWEStickerPickerLoggerDelegate> delegate;
- (void)logLevel:format:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)sharedInstance;
@end
