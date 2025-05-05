@interface WBSSiteMetadataRequest : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) NSDictionary extraInfo;
- (id)url;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithURL:extraInfo:;
- (id)extraInfo;
@end
