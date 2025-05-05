@interface INCIntentDefaultValueProvider : NSObject
@property (nonatomic) INIntent intent;
- (id)intent;
- (void)loadDefaultValuesWithCompletionHandler:;
- (void).cxx_destruct;
- (void)loadDefaultValuesWithAttributes:extensionProxy:completionHandler:;
- (id)initWithIntent:;
- (BOOL)isExpectedDefaultValueError:;
@end
