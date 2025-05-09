@interface GEOPlaceCollection : NSObject
@property (nonatomic) NSString collectionTitle;
@property (nonatomic) NSString collectionLongTitle;
@property (nonatomic) NSString collectionDescription;
@property (nonatomic) NSString collectionHTMLDescription;
@property (nonatomic) GEOMapItemIdentifier collectionIdentifier;
@property (nonatomic) NSArray photos;
@property (nonatomic) NSArray itemIds;
@property (nonatomic) Q numberOfItems;
@property (nonatomic) NSDate lastModifiedDate;
@property (nonatomic) NSString authorName;
@property (nonatomic) <GEOMapItemPhoto> authorPhoto;
@property (nonatomic) NSURL collectionURL;
@property (nonatomic) NSURL publisherCollectionURL;
@property (nonatomic) BOOL suppressed;
@property (nonatomic) BOOL blocked;
@property (nonatomic) GEOPublisher publisher;
@property (nonatomic) <GEOCollectionPublisherAttribution> publisherAttribution;
@property (nonatomic) NSString publisherAttributionIdentifierString;
@property (nonatomic) GEOPlaceCollectionPullQuote publisherBlockQuote;
@property (nonatomic) NSArray mediaLinks;
- (unsigned long long)numberOfItems;
- (id)collectionHTMLDescription;
- (id)collectionIdentifier;
- (BOOL)isSuppressed;
- (id)lastModifiedDate;
- (id)publisher;
- (id)collectionLongTitle;
- (unsigned long long)hash;
- (id)itemIds;
- (void).cxx_destruct;
- (BOOL)isBlocked;
- (id)description;
- (id)collectionTitle;
- (BOOL)isEqual:;
- (id)collectionDescription;
- (id)initWithCollection:usingAttribution:;
- (id)publisherAttribution;
- (id)photos;
- (id)authorName;
- (id)authorPhoto;
- (id)collectionURL;
- (id)publisherCollectionURL;
- (id)publisherBlockQuote;
- (id)mediaLinks;
- (id)publisherAttributionIdentifierString;
@end
