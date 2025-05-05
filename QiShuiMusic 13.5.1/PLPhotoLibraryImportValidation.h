@interface PLPhotoLibraryImportValidation : NSObject
- (id)initWithLibraryManager:;
- (void).cxx_destruct;
- (BOOL)isLibraryValidForImportWithError:;
- (BOOL)checkLibraryCPLStatusWithError:;
- (BOOL)checkLibraryVersionStatusWithError:;
- (BOOL)checkLegacyLibraryVersionStatusWithError:;
- (BOOL)checkLegacyLibraryRequiresRepairWithError:;
@end
