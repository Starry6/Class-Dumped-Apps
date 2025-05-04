@interface AWEShareCopyChannelUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)enableShareCopyChannel:;
+ (void)shortenCopyURLWithContext:completion:;
+ (void)updateContextWithShortURL:context:;
@end
