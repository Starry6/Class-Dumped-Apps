@interface EDRichLinkData : NSObject
@property (nonatomic) NSNumber persistentID;
@property (nonatomic) NSString title;
@property (nonatomic) NSURL url;
@property (nonatomic) NSData data;
- (id)url;
- (id)data;
- (id)title;
- (void).cxx_destruct;
- (id)persistentID;
- (id)initWithPersistentID:title:url:data:;
- (id)initWithTitle:url:data:;
@end
