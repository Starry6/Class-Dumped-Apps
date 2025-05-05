@interface FTiMessageStatus : NSObject
@property (nonatomic) FTServiceStatus serviceStatus;
@property (nonatomic) BOOL iMessageSupported;
- (id)serviceStatus;
- (id)initPrivate;
- (BOOL)iMessageSupported;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
