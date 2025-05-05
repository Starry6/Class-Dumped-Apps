@interface PegasusConfiguration.ConfigInternal : NSObject
@property (nonatomic) NSString userAgent;
@property (nonatomic) NSString clientName;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) NSString firstUseDescriptionText;
@property (nonatomic) BOOL isExpired;
@property (nonatomic) NSString searchURLString;
- (id)rawConfig;
- (id)userAgent;
- (id)valueForKey:;
- (id)init;
- (id)clientName;
- (BOOL)isExpired;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)firstUseDescriptionText;
- (id)searchURLString;
- (id)findConfigForUserAgent:;
- (id)valueForKey:ofType:;
- (id)valueForKey:shouldConsiderOverrides:;
+ (BOOL)supportsSecureCoding;
@end
