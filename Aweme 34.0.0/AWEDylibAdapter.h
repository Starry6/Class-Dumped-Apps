@interface AWEDylibAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)loadDylibIfNeedForKey:ofModule:;
+ (void)loadDylibIfNeedForModule:;
+ (id)dylibNameForKey:ofModule:;
@end
