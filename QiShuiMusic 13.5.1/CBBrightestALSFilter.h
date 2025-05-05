@interface CBBrightestALSFilter : CBFilter
- (id)init;
- (void)dealloc;
- (void)forgetDataForService:;
- (BOOL)setProperty:forKey:;
- (id)filterEvent:;
- (BOOL)displayBrightnessFactorPropertyHandler:;
@end
