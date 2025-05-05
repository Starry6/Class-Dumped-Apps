@interface WBMessageObject : NSObject
@property (nonatomic) WBWeiyouObject weiyouObject;
@property (nonatomic) NSString text;
@property (nonatomic) WBImageObject imageObject;
@property (nonatomic) WBBaseMediaObject mediaObject;
@property (nonatomic) WBNewVideoObject videoObject;
@property (nonatomic) WBSuperGroupObject superTopicObject;
- (void)setVideoObject:;
- (void)setImageObject:;
- (id)imageObject;
- (void)setSuperTopicObject:;
- (void)setWeiyouObject:;
- (id)superTopicObject;
- (id)videoObject;
- (id)weiyouObject;
- (id)validate;
- (void)setText:;
- (void).cxx_destruct;
- (id)text;
- (id)mediaObject;
- (void)setMediaObject:;
+ (id)dictionaryWithMessage:;
+ (id)messageWithDictionary:;
+ (id)message;
@end
