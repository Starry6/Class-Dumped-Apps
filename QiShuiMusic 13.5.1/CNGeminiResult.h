@interface CNGeminiResult : NSObject
@property (nonatomic) CNGeminiChannel channel;
@property (nonatomic) q usage;
@property (nonatomic) NSArray availableChannels;
- (long long)usage;
- (id)init;
- (id)channel;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)availableChannels;
- (id)initWithChannel:usage:availableChannels:;
+ (BOOL)supportsSecureCoding;
@end
