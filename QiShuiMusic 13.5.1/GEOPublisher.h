@interface GEOPublisher : NSObject
@property (nonatomic) q totalCollectionCount;
@property (nonatomic) GEOMapItemIdentifier identifier;
@property (nonatomic) NSString publisherDescription;
@property (nonatomic) NSURL publisherURL;
@property (nonatomic) BOOL suppressed;
@property (nonatomic) BOOL blocked;
@property (nonatomic) <GEOCollectionPublisherAttribution> publisherAttribution;
- (BOOL)isSuppressed;
- (id)identifier;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isBlocked;
- (BOOL)isEqual:;
- (id)publisherAttribution;
- (id)initWithPublisher:usingAttribution:;
- (long long)totalCollectionCount;
- (id)publisherDescription;
- (id)publisherURL;
@end
