@interface MKMapItemMetadataRequest : NSObject
@property (nonatomic) NSURLRequest urlRequest;
@property (nonatomic) MKMapItem mapItem;
@property (nonatomic) NSURL url;
- (id)mapItem;
- (id)url;
- (void)handleError:;
- (void)setMapItem:;
- (id)urlRequest;
- (void).cxx_destruct;
- (void)handleData:;
@end
