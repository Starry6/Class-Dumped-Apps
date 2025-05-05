@interface NSProgressSubscriberProxy : NSObject
@property (nonatomic) NSString category;
@property (nonatomic) NSFileAccessNode itemLocation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appBundleID;
- (id)removePublisherForID:;
- (void)dealloc;
- (id)initWithForwarder:onConnection:subscriberID:appBundleID:;
- (BOOL)isFromConnection:;
- (void)setCategory:;
- (id)observePublisherUserInfoForID:value:forKey:;
- (id)descriptionWithIndenting:;
- (id)description;
- (id)itemLocation;
- (id)observePublisherForID:values:forKeys:;
- (void)setItemLocation:;
- (id)addPublisher:forID:withValues:isOld:;
- (id)category;
@end
