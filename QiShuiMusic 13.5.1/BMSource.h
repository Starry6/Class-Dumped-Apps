@interface BMSource : NSObject
@property (nonatomic) NSString identifier;
- (void)sendEvent:timestamp:;
- (id)init;
- (void)sendEvent:;
- (id)identifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
+ (id)new;
@end
