@interface IMRecentItem : NSObject
@property (nonatomic) NSNumber timestamp;
@property (nonatomic) NSString GUID;
@property (nonatomic) NSURL fileURL;
@property (nonatomic) NSData payloadData;
@property (nonatomic) NSDictionary messageItemInfo;
@property (nonatomic) NSString accessibilityString;
- (id)GUID;
- (void)setFileURL:;
- (void)dealloc;
- (unsigned long long)hash;
- (void)setPayloadData:;
- (void)setTimestamp:;
- (id)timestamp;
- (id)fileURL;
- (BOOL)isEqual:;
- (id)accessibilityString;
- (void)setAccessibilityString:;
- (id)payloadData;
- (id)messageItemInfo;
- (void)setGUID:;
- (id)initWithGUID:data:messageItemInfo:;
- (id)asJSONObject;
- (void)setMessageItemInfo:;
@end
