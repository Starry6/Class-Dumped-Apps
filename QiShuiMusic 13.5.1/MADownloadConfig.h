@interface MADownloadConfig : NSObject
@property (nonatomic) BOOL discretionary;
- (id)initWithPlist:;
- (id)encodeAsPlist;
- (void)setDiscretionary:;
- (id)init;
- (void)logConfig;
- (BOOL)discretionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)summary;
+ (BOOL)supportsSecureCoding;
@end
