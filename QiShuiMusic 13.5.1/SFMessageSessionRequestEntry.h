@interface SFMessageSessionRequestEntry : NSObject
@property (nonatomic) BOOL allowUnencrypted;
@property (nonatomic) @? handler;
@property (nonatomic) NSDictionary options;
- (void)setOptions:;
- (void)setHandler:;
- (id)handler;
- (id)options;
- (void).cxx_destruct;
- (BOOL)allowUnencrypted;
- (void)setAllowUnencrypted:;
@end
