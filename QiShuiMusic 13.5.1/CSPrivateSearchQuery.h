@interface CSPrivateSearchQuery : CSSearchQuery
@property (nonatomic) NSString indexPath;
@property (nonatomic) NSString resolvedIndexPath;
@property (nonatomic) CSSearchConnection savedConnection;
- (void)start;
- (void)setIndexPath:;
- (void)setResolvedIndexPath:;
- (void)setSavedConnection:;
- (id)savedConnection;
- (id)connection;
- (void).cxx_destruct;
- (id)initWithPath:queryString:context:;
- (id)indexPath;
- (id)initWithPath:queryString:attributers:;
- (id)initWithPath:queryString:context:attributes:;
- (id)resolvedIndexPath;
@end
