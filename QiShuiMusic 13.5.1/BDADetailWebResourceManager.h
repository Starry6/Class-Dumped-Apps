@interface BDADetailWebResourceManager : NSObject
- (id)fetchFireEventJSWithEvent:data:;
- (id)fetchActLogJSStringForAdID:;
- (id)fetchDayModelStyleJS;
- (id)fetchFontChangedJSWithFontSizeType:;
- (id)fetchLongPressJSWithPoint:;
- (id)fetchThemeChangedJS;
- (BOOL)isNum:;
- (void)loadGeckoFalconMonitorJs;
+ (id)shareManager;
@end
