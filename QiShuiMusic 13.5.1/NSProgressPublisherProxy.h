@interface NSProgressPublisherProxy : NSObject
@property (nonatomic) NSString category;
@property (nonatomic) NSFileAccessNode itemLocation;
@property (nonatomic) NSProgressValues values;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cancel;
- (void)dealloc;
- (id)publisherID;
- (id)values;
- (id)initWithForwarder:onConnection:publisherID:values:;
- (void)observeUserInfoValue:forKey:;
- (id)appWithBundleID:didAcknowledgeWithSuccess:;
- (BOOL)isFromConnection:;
- (id)prioritize;
- (id)resume;
- (void)setCategory:;
- (id)descriptionWithIndenting:;
- (id)description;
- (id)pause;
- (id)itemLocation;
- (void)setItemLocation:;
- (void)observeValues:forKeys:;
- (id)category;
@end
