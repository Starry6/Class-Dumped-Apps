@interface AppSettingItem : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) NSString openID;
@property (nonatomic) I flag;
@property (nonatomic) BOOL appAddedByUser;
- (BOOL)appAddedByUser;
- (id)openID;
- (void)setAppAddedByUser:;
- (void)setOpenID:;
- (unsigned int)flag;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
- (void)setFlag:;
@end
