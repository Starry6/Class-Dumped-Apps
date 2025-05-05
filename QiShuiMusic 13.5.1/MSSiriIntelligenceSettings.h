@interface MSSiriIntelligenceSettings : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)log;
+ (BOOL)canShowSiriSuggestions;
+ (void)setCanShowSiriSuggestions:;
+ (void)_initializeSettings;
@end
