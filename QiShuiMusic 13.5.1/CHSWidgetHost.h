@interface CHSWidgetHost : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) CHSWidgetConfiguration configuration;
- (id)init;
- (void)dealloc;
- (id)identifier;
- (void)setConfiguration:;
- (id)configuration;
- (void).cxx_destruct;
- (id)initWithIdentifier:connection:;
- (id)initWithIdentifier:;
- (void)invalidate;
+ (id)new;
@end
