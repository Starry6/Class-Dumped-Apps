@interface RPTInteractionOptions : NSObject
@property (nonatomic) Q preferredIdiom;
@property (nonatomic) q pointerFrequency;
@property (nonatomic) BOOL prefersPointer;
@property (nonatomic) RCPEventSenderProperties senderProperties;
- (id)init;
- (BOOL)prefersPointer;
- (id)senderProperties;
- (void)setPreferredIdiom:;
- (unsigned long long)preferredIdiom;
- (long long)pointerFrequency;
- (void)setPointerFrequency:;
+ (id)defaultForPlatform;
@end
