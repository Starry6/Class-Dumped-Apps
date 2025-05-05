@interface TVLBaseDNSParser : NSObject
@property (nonatomic) <TVLDNSParserDelegate> delegate;
@property (nonatomic) NSString hostname;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hostname;
- (void)cancel;
- (void)setHostname:;
- (void)start;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithHostname:;
@end
