@interface NWHostEndpoint : NWEndpoint
@property (nonatomic) NSString hostname;
@property (nonatomic) NSString port;
- (id)hostname;
- (id)descriptionWithIndent:showFullContent:;
- (id)port;
+ (unsigned int)endpointType;
+ (id)endpointWithHostname:port:;
@end
