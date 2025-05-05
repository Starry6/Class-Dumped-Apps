@interface MFMailMimePart : MFMimePart
- (id)htmlContent;
- (id)fileWrapperForDecodedObject:withFileData:;
- (void)configureFileWrapper:;
- (id)contentToOffset:resultOffset:downloadIfNecessary:asHTML:isComplete:;
- (id)decodeTextRichtext;
- (id)decodeTextEnriched;
- (id)decodeTextHtml;
- (id)htmlContentToOffset:resultOffset:downloadIfNecessary:;
- (id)htmlContentToOffset:resultOffset:;
- (id)decodeTextPlain;
- (id)decodeTextCalendar;
- (id)decodeMultipartAppledouble;
- (id)storeData:inMessage:isComplete:;
- (BOOL)_shouldContinueDecodingProcess;
- (id)decodeMessageDelivery_status;
- (id)decodeMessageRfc822;
- (id)decodeMessagePartial;
- (id)decodeMessageExternal_body;
+ (Class)attachmentClass;
+ (BOOL)isRecognizedClassForContent:;
@end
