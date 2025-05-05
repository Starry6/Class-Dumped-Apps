@interface OspreyChannelRequestOptions : NSObject
@property (nonatomic) BOOL compressionEnabled;
@property (nonatomic) BOOL forceHTTPv2;
- (id)init;
- (BOOL)isCompressionEnabled;
- (void)setCompressionEnabled:;
- (BOOL)forceHTTPv2;
- (void)setForceHTTPv2:;
- (void)applyToOspreyMutableRequest:;
@end
